int sub_80C07C4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(36 * v202E8CC + 0x2027E6D) && (unsigned int)*(_BYTE *)(36 * v202E8CC + 0x2027E6C) - 1 <= 0x28 )
  {
    switch ( *(_BYTE *)(36 * v202E8CC + 0x2027E6C) )
    {
      case 1:
        DoTVShowPokemonFanClubLetter();
        break;
      case 2:
        DoTVShowRecentHappenings();
        break;
      case 3:
        DoTVShowPokemonFanClubOpinions();
        break;
      case 4:
        nullsub_22();
        break;
      case 0x29:
        DoTVShowPokemonNewsMassOutbreak();
        break;
      case 6:
        DoTVShowBravoTrainerPokemonProfile();
        break;
      case 7:
        sub_80C0B9C();
        break;
      case 0x15:
        DoTVShowPokemonTodaySuccessfulCapture();
        break;
      case 0x16:
        DoTVShowTodaysSmartShopper();
        break;
      case 5:
        DoTVShowTheNameRaterShow();
        break;
      case 0x17:
        DoTVShowPokemonTodayFailedCapture();
        break;
      case 0x18:
        DoTVShowPokemonAngler();
        break;
      case 0x19:
        DoTVShowTheWorldOfMasters();
        break;
      default:
        return v1;
    }
  }
  return v1;
}
