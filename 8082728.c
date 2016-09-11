int sub_8082728()
{
  unsigned int v0; // r0@3
  __int16 v1; // r0@5
  int v3; // [sp+0h] [bp-4h]@0

  if ( v202FF5C != 1 && v202FF5C != 8 )
  {
    v0 = (unsigned __int8)sub_803FC58(v202FF5E);
    if ( v0 > 0xD )
    {
def_808274E:
      v1 = 423;
    }
    else
    {
      switch ( v0 )
      {
        case 0u:
          v1 = 380;
          break;
        case 1u:
          v1 = 407;
          break;
        case 2u:
          v1 = 379;
          break;
        case 4u:
          v1 = 416;
          break;
        case 5u:
          v1 = 417;
          break;
        case 6u:
          v1 = 419;
          break;
        case 7u:
          v1 = 441;
          break;
        case 8u:
          v1 = 385;
          break;
        case 9u:
          v1 = 449;
          break;
        case 0xAu:
          v1 = 450;
          break;
        case 0xBu:
          v1 = 451;
          break;
        case 0xCu:
          v1 = 453;
          break;
        case 0xDu:
          v1 = 397;
          break;
        default:
          goto def_808274E;
      }
    }
    current_map_music_set(v1);
  }
  return v3;
}
