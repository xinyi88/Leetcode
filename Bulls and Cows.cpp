string getHint(string secret, string guess) {
     // transform a string to an integer
	int n = secret.size();
	int bull = 0, cow = 0;
	unordered_map<char, int> myhash;
	vector<bool> flag(n, false);
	for (int i = 0; i < n; i++){
		myhash[secret[i]]++;
	}
	for (int i = 0; i < n; i++){
		if (secret[i] == guess[i])
		{
			bull++;
			myhash[secret[i]]--;
			flag[i] = true;
		}
		
	}
	for (int i = 0; i < n; i++){
			if (!flag[i] && myhash.find(guess[i]) != myhash.end() && myhash[guess[i]]!=0){
				cow++;
				myhash[guess[i]]--;
		}
	}
	string res;
	res = to_string(bull);
	res.push_back('A');
	res+=to_string(cow);
	res.push_back('B');
	return res;
    }