from bs4 import BeautifulSoup
import urllib3

def retrieve_rank(server, username):
    
    url = f"https://www.op.gg/summoners/{server.lower()}/{username}"
    http = urllib3.PoolManager()
    response = http.request('GET', url, decode_content=True)
    reply = response.data

    soup = BeautifulSoup(reply, 'html.parser')
    tier = soup.find("div", {"class": "tier"}).contents[0]
    lp = soup.find("div", {"class": "lp"}).contents[0]

    print(tier)
    print(f"{lp} lp")

# example usage
# retrieve_rank('na', 'Pobelter-NA1')
# retrieve_rank('na', 'Katevolved-666')
# retrieve_rank('euw', 'Don Noway-EUW')
# retrieve_rank('kr', 'Hide on Bush-KR1')
