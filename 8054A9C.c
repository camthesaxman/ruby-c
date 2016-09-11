signed int __fastcall sub_8054A9C(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  int v5; // r0@5
  int v6; // r0@6
  signed int result; // r0@15

  v1 = a1;
  v2 = *a1;
  if ( v2 > 0xD )
  {
def_8054AAE:
    result = 0;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v3 = sub_80547A8();
        sub_8054BA8(v3);
        goto _08054B70;
      case 1u:
        sub_8054D4C(1);
        goto _08054B70;
      case 2u:
        v4 = sub_8054F48();
        v5 = sub_8054E20(v4);
        sub_8054E7C(v5);
        goto _08054B70;
      case 3u:
        v6 = sub_8054814();
        sub_8054C54(v6);
        SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        goto _08054B70;
      case 4u:
        move_tilemap_camera_to_upper_left_corner();
        goto _08054B70;
      case 5u:
        sub_8056D28(v202E828);
        goto _08054B70;
      case 6u:
        sub_8056D38(v202E828);
        goto _08054B70;
      case 7u:
        apply_map_tileset1_tileset2_palette(v202E828);
        goto _08054B70;
      case 8u:
        DrawWholeMapView(v2);
        goto _08054B70;
      case 9u:
        cur_mapheader_run_tileset_funcs_after_some_cpuset(v2);
        goto _08054B70;
      case 0xCu:
        sub_80543E8();
        goto _08054B70;
      case 0xAu:
      case 0xBu:
_08054B70:
        ++*v1;
        goto def_8054AAE;
      case 0xDu:
        SetFieldVBlankCallback();
        ++*v1;
        result = 1;
        break;
      default:
        goto def_8054AAE;
    }
  }
  return result;
}
