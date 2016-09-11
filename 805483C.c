signed int __fastcall sub_805483C(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@3
  int v5; // r0@3
  int v6; // r0@3
  int v7; // r0@6
  int v8; // r0@6
  int v9; // r0@6
  int v10; // r0@7
  signed int result; // r0@16

  v1 = a1;
  v2 = *a1;
  if ( v2 > 0xD )
  {
def_805484E:
    result = 0;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v3 = sub_80547A8();
        v4 = script_env_1_init(v3);
        v5 = script_env_2_disable(v4);
        v6 = sub_8054F70(v5);
        sub_8054BA8(v6);
        goto _08054928;
      case 1u:
        sub_8053994(1);
        goto _08054928;
      case 2u:
        sub_8054D4C(1);
        goto _08054928;
      case 3u:
        v7 = sub_8054E98();
        v8 = sub_8054D90(v7);
        v9 = sub_8054EC8(v8);
        sub_8054E60(v9);
        goto _08054928;
      case 4u:
        v10 = sub_8054814();
        sub_8054C54(v10);
        SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        goto _08054928;
      case 5u:
        move_tilemap_camera_to_upper_left_corner();
        goto _08054928;
      case 6u:
        sub_8056D28(v202E828);
        goto _08054928;
      case 7u:
        sub_8056D38(v202E828);
        goto _08054928;
      case 8u:
        apply_map_tileset1_tileset2_palette(v202E828);
        goto _08054928;
      case 9u:
        DrawWholeMapView(v2);
        goto _08054928;
      case 0xAu:
        cur_mapheader_run_tileset_funcs_after_some_cpuset(v2);
        goto _08054928;
      case 0xCu:
        sub_80543E8();
        goto _08054928;
      case 0xBu:
_08054928:
        ++*v1;
        goto def_805484E;
      case 0xDu:
        result = 1;
        break;
      default:
        goto def_805484E;
    }
  }
  return result;
}
