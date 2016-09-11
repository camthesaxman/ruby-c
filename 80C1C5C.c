int DoTVShowInSearchOfTrainers()
{
  int v0; // r7@1
  int v2; // [sp+10h] [bp-4h]@0

  v202E8DC = 0;
  v0 = v20387E8;
  if ( v20387E8 <= 8u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80FBFB4(&gStringVar1, v202824C, 0);
        if ( v202824D <= 1u )
          v20387E8 = 2;
        else
          v20387E8 = 1;
        break;
      case 1u:
        v20387E8 = 2;
        break;
      case 2u:
        if ( v202824E & 1 )
        {
          if ( v202824E & 8 )
          {
            v20387E8 = 5;
          }
          else if ( v202824E & 4 )
          {
            v20387E8 = 6;
          }
          else if ( v202824E & 2 )
          {
            v20387E8 = 7;
          }
          else
          {
            v20387E8 = 3;
          }
        }
        else
        {
          v20387E8 = 4;
        }
        break;
      case 3u:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * v2028244]);
        StringCopy(&gStringVar2, &gMoveNames[13 * v2028248]);
        StringCopy(&gStringVar3, &gSpeciesNames[11 * v2028246]);
        v20387E8 = 8;
        break;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        v20387E8 = 8;
        break;
      case 8u:
        sub_80EB3FC(&gStringVar1, v202824A);
        StringCopy(&gStringVar2, &gSpeciesNames[11 * v2028244]);
        StringCopy(&gStringVar3, &gSpeciesNames[11 * v2028246]);
        v202E8DC = 1;
        v20387E8 = 0;
        TakeTVShowInSearchOfTrainersOffTheAir();
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D1600 + v0));
  return v2;
}
