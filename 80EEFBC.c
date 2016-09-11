int __fastcall sub_80EEFBC(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  void *v2; // r8@3
  int v3; // r1@3
  void *v4; // r3@4
  int v5; // r1@4
  int v6; // r7@5
  void *v7; // r6@6
  int v8; // r0@6
  int v9; // r1@6
  int v11; // [sp+0h] [bp-28h]@6
  int v12; // [sp+0h] [bp-28h]@11
  unsigned __int16 v13; // [sp+Ch] [bp-1Ch]@3
  unsigned __int16 v14; // [sp+Ch] [bp-1Ch]@4
  unsigned __int16 v15; // [sp+Ch] [bp-1Ch]@6
  int v16; // [sp+24h] [bp-4h]@0

  v1 = a1;
  sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 0, 0, 17, 2u);
  if ( v1 <= 0xB )
  {
    switch ( v1 )
    {
      case 0u:
        v2 = &gUnknown_08E9A100;
        sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 17, 0, 10, 2u);
        v13 = 2;
        v3 = 10;
        goto _080EF204;
      case 0xBu:
        v4 = &gUnknown_08E9A100;
        v14 = 2;
        v5 = 8;
        goto _080EF0EE;
      case 2u:
        v6 = v2006DAC;
        if ( v2006DAC )
        {
          v4 = &gUnknown_08E9A100;
          v14 = 2;
          v5 = 10;
_080EF0EE:
          sub_809D104(100718592, v5, 0x16u, (int)v4, 0, 6, 7, v14);
        }
        else
        {
          v7 = &gUnknown_08E9A100;
          sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 10, 2, 10, 2u);
          v11 = v6;
          v15 = 2;
          v8 = 100718592;
          v9 = 10;
_080EF1C2:
          sub_809D104(v8, v9, 0x16u, (int)v7, v11, 6, 7, v15);
        }
        break;
      case 3u:
        v2 = &gUnknown_08E9A100;
        sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 0, 4, 10, 2u);
        v13 = 2;
        v3 = 10;
        goto _080EF204;
      case 4u:
        v7 = &gUnknown_08E9A100;
        sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 20, 2, 10, 2u);
        v11 = 0;
        v15 = 2;
        v8 = 100718592;
        v9 = 10;
        goto _080EF1C2;
      case 7u:
        v7 = &gUnknown_08E9A100;
        v12 = 10;
        goto _080EF1A0;
      case 8u:
        v7 = &gUnknown_08E9A100;
        v12 = 20;
_080EF1A0:
        sub_809D104(100718592, 0, 0x16u, (int)v7, v12, 4, 10, 2u);
        v11 = 0;
        v15 = 2;
        v8 = 100718592;
        v9 = 7;
        goto _080EF1C2;
      case 5u:
      case 9u:
        v2 = &gUnknown_08E9A100;
        sub_809D104(100718592, 0, 0x16u, (int)&gUnknown_08E9A100, 0, 2, 10, 2u);
        v13 = 2;
        v3 = 8;
_080EF204:
        sub_809D104(100718592, v3, 0x16u, (int)v2, 0, 6, 7, v13);
        break;
      case 0xAu:
        sub_809D104(100718592, 8, 0x16u, (int)&gUnknown_08E9A100, 0, 6, 7, 2u);
        break;
      default:
        return v16;
    }
  }
  return v16;
}
