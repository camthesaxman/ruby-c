int __fastcall sub_8092AD4(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r4@1
  unsigned __int8 v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  sub_8092964(a1);
  if ( v2 <= 6 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = 3;
        goto _08092B3A;
      case 1u:
        v3 = 4;
        goto _08092B3A;
      case 2u:
        sub_809286C(0xAu, 0, 0);
        v3 = 5;
        goto _08092B3A;
      case 3u:
        sub_809286C(0xAu, 0, 0);
        v3 = 6;
        goto _08092B3A;
      case 4u:
        v3 = 7;
        goto _08092B3A;
      case 5u:
        v3 = 8;
_08092B3A:
        sub_809286C(v3, 0, 0);
        break;
      case 6u:
        sub_809286C(9u, 0, 0);
        break;
      default:
        break;
    }
  }
  sub_8091E20(gUnknown_083B57FC[3 * v2]);
  return v5;
}
