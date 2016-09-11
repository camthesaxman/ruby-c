int __fastcall sub_809286C(unsigned __int8 a1, char a2, char a3)
{
  int v3; // r4@1
  int v4; // r5@1
  char *v5; // r0@3
  unsigned __int8 v6; // r1@3
  int v7; // r2@3
  char *v8; // r0@5
  int v9; // r3@5
  int v11; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = a2 & 1 | 2 * (a3 & 1);
  if ( a1 <= 0xAu )
  {
    switch ( a1 )
    {
      case 0u:
      case 1u:
      case 2u:
        v5 = &gUnknown_083B57E4[8 * a1];
        v6 = v5[4];
        LOBYTE(v7) = v5[5];
        goto _08092932;
      case 3u:
      case 4u:
      case 7u:
      case 8u:
        sub_8092810(
          v4,
          gUnknown_083B57FC[12 * (a1 - 3) + 4],
          gUnknown_083B57FC[12 * (a1 - 3) + 5],
          (unsigned __int8)gUnknown_083B57FC[12 * (a1 - 3) + 6]);
        goto _080928EC;
      case 5u:
      case 6u:
_080928EC:
        v8 = &gUnknown_083B57FC[12 * (v3 - 3)];
        v6 = v8[7];
        LOBYTE(v7) = v8[8];
        v9 = (unsigned __int8)v8[9];
        goto _08092934;
      case 0xAu:
        v6 = 0;
        LOBYTE(v7) = 6;
        v9 = 5;
        goto _08092934;
      case 9u:
        if ( sub_806912C() )
        {
          sub_8092810(
            v4,
            gUnknown_083B57FC[12 * (v3 - 3) + 4],
            gUnknown_083B57FC[12 * (v3 - 3) + 5],
            (unsigned __int8)gUnknown_083B57FC[12 * (v3 - 3) + 6]);
        }
        else
        {
          v5 = &gUnknown_083B57FC[12 * (v3 - 3)];
          v6 = v5[4];
          v7 = ((unsigned __int8)v5[5] - 2) & 0xFF;
_08092932:
          v9 = (unsigned __int8)v5[6];
_08092934:
          sub_8092810(v4, v6, v7, v9);
        }
        break;
      default:
        return v11;
    }
  }
  return v11;
}
