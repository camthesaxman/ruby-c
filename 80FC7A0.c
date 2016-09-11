int __fastcall sub_80FC7A0(int a1)
{
  unsigned int v1; // r0@1
  int v2; // r0@6
  int v3; // r0@6
  int v4; // r0@8
  int v5; // r0@8
  int v6; // r0@8
  int v7; // r0@8
  int v8; // r0@14
  int v9; // r0@14
  int v10; // r0@14
  int v11; // r0@14
  int v12; // r0@14
  int v14; // [sp+0h] [bp-4h]@0

  dword_3005DEC = *(_DWORD *)(a1 + 4);
  byte_3005E00 = *(_BYTE *)(a1 + 31);
  byte_3005DE8 = *(_BYTE *)(a1 + 25);
  byte_3005DFC = *(_BYTE *)(a1 + 26);
  byte_3005DF8 = *(_BYTE *)(a1 + 27);
  byte_3005DF0 = *(_BYTE *)(a1 + 28);
  byte_3005E04 = *(_BYTE *)(a1 + 29);
  byte_3005DF4 = *(_BYTE *)(a1 + 30);
  v1 = *(_BYTE *)a1 - 2;
  if ( v1 <= 0x22 )
  {
    switch ( v1 )
    {
      case 0u:
        sub_80FCAA4();
        break;
      case 6u:
        sub_80FCB5C(v1);
        break;
      case 7u:
        sub_80FCD54();
        sub_80FCC18((unsigned __int8)byte_3005E00);
        break;
      case 8u:
        v2 = sub_80FCD54();
        v3 = sub_80FCEA4(v2);
        v1 = sub_80FCCBC(v3);
        goto _080FC8C4;
      case 0x1Du:
_080FC8C4:
        sub_80FCEA4(v1);
        break;
      case 9u:
        v4 = sub_80FCD54();
        v5 = sub_80FD06C(v4);
        v6 = sub_80FD06C(v5);
        v7 = sub_80FD114(v6);
        sub_80FCCBC(v7);
        break;
      case 0xBu:
        sub_80FCF3C();
        break;
      case 0x1Cu:
        sub_80FCD54();
        break;
      case 0x1Eu:
        sub_80FD06C(v1);
        break;
      case 0x1Fu:
        sub_80FD114(v1);
        break;
      case 4u:
        sub_80FCAC4();
        sub_80FC92C(3);
        break;
      case 0x22u:
        v8 = sub_80FCD54();
        v9 = sub_80FD06C(v8);
        v10 = sub_80FD114(v9);
        v11 = sub_80FCCBC(v10);
        v12 = sub_80FCB5C(v11);
        sub_80FCB5C(v12);
        sub_80FC92C(2);
        sub_80FC9E4(4);
        break;
      default:
        return v14;
    }
  }
  return v14;
}
