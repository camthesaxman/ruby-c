int sub_813EFDC()
{
  signed int v0; // r0@6
  int v2; // [sp+4h] [bp-4h]@0

  if ( v2000888 <= 4u )
  {
    switch ( v2000888 )
    {
      case 0u:
        v4000000 = 5441;
        goto _0813F08E;
      case 1u:
        if ( !(v202F38F & 0x80) )
          goto _0813F08E;
        return v2;
      case 2u:
        v0 = (unsigned __int8)sub_80FAB60();
        if ( v0 == 3 )
        {
          sub_813F0C8(3);
        }
        else if ( v0 >= 3 && v0 <= 5 )
        {
_0813F08E:
          ++v2000888;
        }
        break;
      case 3u:
        BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
        goto _0813F08E;
      case 4u:
        if ( !(v202F38F & 0x80) )
        {
          sub_80FAB10();
          SetMainCallback2(v2000000);
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}
