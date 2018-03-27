import subprocess
import json


with open('j.json') as json_data:
	data = json.load(json_data)
	error = []
	for r in data["Dependencies"]:

		yo = subprocess.call('pip install ' + r,shell=True)
		
		
		if yo != 0:
			error.append(r)
			#print(r + ' failed')


	if(len(error)==0):
		print ("Success")
	else:
		print "Following Packages were not installed"
		for r in error:
			print (r)
			
			
