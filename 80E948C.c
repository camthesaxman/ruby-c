int sub_80E948C()
{
  void *v0; // r3@3
  int v1; // r1@3
  void *v2; // r3@4
  int v3; // r1@4
  int v5; // [sp+0h] [bp-14h]@3
  int v6; // [sp+4h] [bp-10h]@3
  int v7; // [sp+4h] [bp-10h]@4
  int v8; // [sp+8h] [bp-Ch]@3
  int v9; // [sp+8h] [bp-Ch]@4
  unsigned __int16 v10; // [sp+Ch] [bp-8h]@3
  unsigned __int16 v11; // [sp+Ch] [bp-8h]@4
  int v12; // [sp+10h] [bp-4h]@0

  if ( v2001009 <= 5u )
  {
    switch ( v2001009 )
    {
      case 4u:
        v0 = &gUnknown_08E94AD0;
        v5 = 0;
        v6 = 26;
        v8 = 24;
        v10 = 6;
        v1 = 3;
        goto _080E9568;
      case 5u:
        v2 = &gUnknown_08E94AD0;
        v7 = 18;
        v9 = 13;
        v11 = 8;
        v3 = 14;
        goto _080E951E;
      case 0u:
        v2 = &gUnknown_08E94AD0;
        v7 = 10;
        v9 = 26;
        v11 = 8;
        v3 = 2;
_080E951E:
        sub_809D104(100689920, v3, 2u, (int)v2, 0, v7, v9, v11);
        break;
      case 1u:
        sub_809D104(100689920, 2, 0, (int)&gUnknown_08E94AD0, 0, 0, 26, 0xAu);
        break;
      case 2u:
        v0 = &gUnknown_08E94AD0;
        v5 = 13;
        v6 = 18;
        v8 = 13;
        v10 = 4;
        v1 = 14;
_080E9568:
        sub_809D104(100689920, v1, 3u, (int)v0, v5, v6, v8, v10);
        break;
      case 3u:
        sub_809D104(100689920, 3, 2u, (int)&gUnknown_08E94AD0, 0, 32, 24, 4u);
        break;
      default:
        return v12;
    }
  }
  return v12;
}
