int __fastcall sub_810FE1C(int a1, int a2, unsigned int a3)
{
  _BYTE *v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  a3 = (unsigned __int8)a3;
  v3 = (_BYTE *)(a1 + (16 * a2 & 0xFFF));
  if ( *v3 == 255 )
  {
    if ( a3 > 5 )
    {
def_810FE3A:
      StringCopy(&gStringVar1, &gUnknown_0840FF3A);
    }
    else
    {
      switch ( a3 )
      {
        case 1u:
          StringCopy(&gStringVar1, &gUnknown_0840FF42);
          break;
        case 2u:
          StringCopy(&gStringVar1, &gUnknown_0840FF49);
          break;
        case 3u:
          StringCopy(&gStringVar1, &gUnknown_0840FF50);
          break;
        case 4u:
          StringCopy(&gStringVar1, &gUnknown_0840FF57);
          break;
        case 5u:
          StringCopy(&gStringVar1, &gUnknown_0840FF5E);
          break;
        default:
          goto def_810FE3A;
      }
    }
  }
  else
  {
    StringCopyN((int)&gStringVar1, (int)v3, 7);
    byte_20231D3 = -1;
    if ( (unsigned __int8)gStringVar1 == 252 && byte_20231CD == 21 )
      ConvertInternationalString((int)&gStringVar1, 1);
  }
  return v5;
}
