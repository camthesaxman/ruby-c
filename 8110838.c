signed int sub_8110838()
{
  if ( v2000114 <= 5u )
  {
    switch ( v2000114 )
    {
      case 0u:
        sub_8110908(v200000E);
        goto _081108F0;
      case 1u:
        sub_8110C34();
        goto _081108F0;
      case 2u:
        LZ77UnCompVram(&gUnknown_083F8438, 100712448);
        goto _081108F0;
      case 3u:
        v40000D4 = 33554710;
        v40000D8 = 100724736;
        v40000DC = -2147483008;
        goto _081108F0;
      case 4u:
        LoadPalette((int)&gUnknown_083F8418, 0, 32);
_081108F0:
        ++v2000114;
        return 1;
      case 5u:
        v4000008 = 7693;
        ++v2000114;
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
