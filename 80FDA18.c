int __fastcall sub_80FDA18(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r0@5
  int v3; // r0@6
  int v4; // r0@7
  int v5; // r0@8
  int v7; // [sp+0h] [bp-4h]@0

  word_3005E0C = 16 * *(_BYTE *)(a1 + 24);
  dword_3005E08 = *(_DWORD *)(a1 + 8) + 2 * (unsigned __int16)word_3005E0C;
  dword_3005DEC = *(_DWORD *)(a1 + 4);
  byte_3005DE8 = *(_BYTE *)(a1 + 25);
  byte_3005DFC = *(_BYTE *)(a1 + 26);
  byte_3005DF8 = *(_BYTE *)(a1 + 27);
  byte_3005DF0 = *(_BYTE *)(a1 + 28);
  byte_3005E04 = *(_BYTE *)(a1 + 29);
  byte_3005DF4 = *(_BYTE *)(a1 + 30);
  v1 = *(_WORD *)(a1 + 20);
  if ( v1 <= 5 )
  {
    switch ( v1 )
    {
      case 0u:
        sub_80FDC18(0);
        break;
      case 1u:
        sub_80FDC18(1);
        break;
      case 2u:
        v2 = sub_80FDAE4();
        sub_80FDF88(v2);
        break;
      case 3u:
        v3 = sub_80FDBE4();
        sub_80FDED8(v3);
        break;
      case 4u:
        v4 = sub_80FDBA8();
        sub_80FDE28(v4);
        break;
      case 5u:
        v5 = sub_80FDB8C();
        sub_80FDD70(v5);
        break;
      default:
        return v7;
    }
  }
  return v7;
}
