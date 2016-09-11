signed int __fastcall sub_805493C(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  int v5; // r0@6
  int v6; // r0@7
  signed int result; // r0@19

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  if ( v4 > 0xD )
  {
def_8054952:
    result = 0;
  }
  else
  {
    switch ( v4 )
    {
      case 0u:
        sub_80547A8();
        sub_8053994(v3);
        goto _08054A38;
      case 1u:
        sub_8054BA8(v4);
        goto _08054A38;
      case 2u:
        sub_8054D4C(a2);
        goto _08054A38;
      case 3u:
        v5 = mli4_mapscripts_and_other();
        sub_8054E34(v5);
        goto _08054A38;
      case 4u:
        v6 = sub_8054814();
        sub_8054C54(v6);
        SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        goto _08054A38;
      case 5u:
        move_tilemap_camera_to_upper_left_corner();
        goto _08054A38;
      case 6u:
        sub_8056D28(v202E828);
        goto _08054A38;
      case 7u:
        sub_8056D38(v202E828);
        goto _08054A38;
      case 8u:
        apply_map_tileset1_tileset2_palette(v202E828);
        goto _08054A38;
      case 9u:
        DrawWholeMapView(v4);
        goto _08054A38;
      case 0xAu:
        cur_mapheader_run_tileset_funcs_after_some_cpuset(v4);
        goto _08054A38;
      case 0xBu:
        if ( v202E842 == 1 && (sub_80BBB24() & 0xFF) == 1 )
          AddMapNamePopUpWindowTask(1);
        goto _08054A38;
      case 0xCu:
        sub_80543E8();
_08054A38:
        ++*v2;
        goto def_8054952;
      case 0xDu:
        result = 1;
        break;
      default:
        goto def_8054952;
    }
  }
  return result;
}
