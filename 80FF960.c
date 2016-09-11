int __fastcall sub_80FF960(unsigned __int8 a1)
{
  int v1; // r3@1
  unsigned int v2; // r0@1
  int *v3; // r1@3
  signed __int16 v4; // r0@3
  int *v5; // r0@4
  signed __int16 v6; // r1@4
  signed __int16 v7; // r1@6
  int *v8; // r1@9
  int v10; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *((_BYTE *)&gDecorations + 32 * *(_BYTE *)(v20388D0 + v20388F5) + 18);
  if ( v2 <= 9 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &dword_3004B20[10 * v1];
        v4 = 1;
        goto _080FFA88;
      case 1u:
        v5 = &dword_3004B20[10 * v1];
        *((_WORD *)v5 + 9) = 2;
        v6 = 1;
        goto _080FFAA4;
      case 2u:
        v5 = &dword_3004B20[10 * v1];
        *((_WORD *)v5 + 9) = 3;
        v6 = 1;
        goto _080FFAA4;
      case 3u:
        v5 = &dword_3004B20[10 * v1];
        v7 = 4;
        goto _080FFAA0;
      case 4u:
        v3 = &dword_3004B20[10 * v1];
        v4 = 2;
        goto _080FFA88;
      case 5u:
        v5 = &dword_3004B20[10 * v1];
        v7 = 1;
        goto _080FFAA0;
      case 6u:
        v8 = &dword_3004B20[10 * v1];
        *((_WORD *)v8 + 9) = 1;
        *((_WORD *)v8 + 10) = 3;
        ++*((_WORD *)v8 + 5);
        return v10;
      case 7u:
        v5 = &dword_3004B20[10 * v1];
        *((_WORD *)v5 + 9) = 2;
        v6 = 4;
        goto _080FFAA4;
      case 8u:
        v3 = &dword_3004B20[10 * v1];
        v4 = 3;
_080FFA88:
        *((_WORD *)v3 + 9) = v4;
        *((_WORD *)v3 + 10) = v4;
        break;
      case 9u:
        v5 = &dword_3004B20[10 * v1];
        v7 = 3;
_080FFAA0:
        *((_WORD *)v5 + 9) = v7;
        v6 = 2;
_080FFAA4:
        *((_WORD *)v5 + 10) = v6;
        break;
      default:
        return v10;
    }
  }
  return v10;
}
