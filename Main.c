
//Near Attack
	if(targetSlot.taken == true || player[i].Slot < 1)
	{
		if (player[i].Strength <= 70)
		{
			player[i].Health - (0.5 * player[i].Strength);
		}
		else if (player[i].Strenght > 70)
		{
			player[i].Health - (0.3 * player[i].Strength);
		}
		else 
			return 0;
	}
