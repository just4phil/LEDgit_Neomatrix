//
//const static char wordFeels[] = { "Feels" };
//const static char wordLike[] = { "like" };
//const static char wordI[] = { "i" };
//const static char wordAm[] = { "am" };
//const static char wordJust[] = { "just" };
//const static char wordToo[] = { "too" };
//const static char wordClose[] = { "close" };
//const static char wordTo[] = { "to" };
//const static char wordLove[] = { "love" };
//const static char wordYou[] = { "you!" };
//
//const static String wordArrTooCLose2[] = { wordFeels, wordLike, wordI, wordAm, wordJust, wordToo, wordClose, wordTo, wordLove, wordYou }; // ,'\0'
//
//void TooClose() {
//	FastLED.setBrightness(BRIGHTNESS); // zur sicherheit in jedem loop neu auf default setzen. ggf. kann einzelner fx das überschreiben
//
//	switch (prog) {
//
//	case 0: // intro
//		progCircles(30475, 1, 950); 		// BPM sollten immer ein vielfaches von 25 sein!
//		break;
//
//	case 1: // verse 2
//		progRandomLines(45700, 2, 475); 	// BPM sollten immer ein vielfaches von 25 sein!
//		break;
//
//	case 2: // chorus 1
//		progFullColors(30475, 3, 950); 		// 30476
//		break;
//
//	case 3: // uebergang zu verse 2
//		progCircles(15225, 4, 950); 		// 15238
//		break;
//
//	case 4: // verse 2
//		progRandomLines(30475, 5, 475);		// 29025
//		break;
//
//	case 5: // phil alleine
//		progWordArray(wordArrTooCLose2, 10, 475, 5675, getRandomColor(), 6);
//		break;
//
//	case 6: // chorus 2
//		progStern(24775, 7);				// 4558
//		break;
//
//	case 7: // hardcore 1
//		progStrobo(15225, 8, 75, 255, 255, 255); // Weisser strobo // 11722
//		break;
//
//	case 8: // chorus 3
//		progFullColors(15225, 9, 952);		// 15238
//		break;
//
//	case 9: // halftime
//		//progCLED(7619, 10);					// 3386
//		progFastBlingBling(7600, 10);		// 395
//		break;
//
//	case 10: // chorus weiter
//		progFullColors(7600, 11, 950);		// 7619
//		break;
//
//	case 11: // hardcore 2
//		progStrobo(7600, 12, 75, getRandomColorValue(), getRandomColorValue(), getRandomColorValue()); // 5861
//		break;
//
//	case 12: // outro
//		progBlingBlingColoring(65535, 100); // 65535 is max for unsigned int!
//		break;
//
//	case 100:
//		FastLED.clear();
//		switchToSong(0);	// SongID 0 == DEFAULT loop
//		break;
//	}
//}