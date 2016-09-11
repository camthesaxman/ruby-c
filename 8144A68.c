int __fastcall sub_8144A68(int a1, unsigned __int8 a2)
{
  int v2; // r8@1
  int v3; // r7@1
  int *v4; // r4@3
  char *v5; // r1@3
  char *v6; // r0@3
  signed int v7; // r0@3
  signed int v8; // r2@3
  char *v9; // r1@4
  char *v10; // r0@4
  char *v11; // r1@5
  char *v12; // r0@5
  char *v13; // r1@6
  char *v14; // r0@6
  char *v15; // r1@7
  char *v16; // r0@7
  int *v17; // r5@9
  int v19; // [sp+14h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v2 = a1;
  v3 = a2;
  if ( (unsigned __int8)a1 <= 4u )
  {
    switch ( a1 )
    {
      case 0:
        v4 = &dword_3004B20[10 * a2];
        v5 = &gSprites[68 * *((_WORD *)v4 + 9) + 62];
        *v5 &= 0xFBu;
        v6 = &gSprites[68 * *((_WORD *)v4 + 10) + 62];
        *v6 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 32] = 272;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 32] = 272;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 46] = 0;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 46] = 0;
        v7 = 0;
        v8 = 32;
        goto _08144DF0;
      case 1:
        v4 = &dword_3004B20[10 * a2];
        v9 = &gSprites[68 * *((_WORD *)v4 + 9) + 62];
        *v9 &= 0xFBu;
        v10 = &gSprites[68 * *((_WORD *)v4 + 10) + 62];
        *v10 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 32] = 120;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 32] = 272;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 46] = 0;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 46] = 0;
        v7 = 0;
        v8 = 32;
        goto _08144DF0;
      case 2:
        v4 = &dword_3004B20[10 * a2];
        v11 = &gSprites[68 * *((_WORD *)v4 + 9) + 62];
        *v11 &= 0xFBu;
        v12 = &gSprites[68 * *((_WORD *)v4 + 10) + 62];
        *v12 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 32] = 120;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 32] = 272;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 46] = 0;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 46] = 0;
        v8 = 512;
        v7 = 1;
        goto _08144DF0;
      case 3:
        v4 = &dword_3004B20[10 * a2];
        v13 = &gSprites[68 * *((_WORD *)v4 + 9) + 62];
        *v13 &= 0xFBu;
        v14 = &gSprites[68 * *((_WORD *)v4 + 10) + 62];
        *v14 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 32] = 120;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 32] = -32;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 46] = 0;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 46] = 0;
        v8 = 512;
        v7 = 1;
        goto _08144DF0;
      case 4:
        v4 = &dword_3004B20[10 * a2];
        v15 = &gSprites[68 * *((_WORD *)v4 + 9) + 62];
        *v15 &= 0xFBu;
        v16 = &gSprites[68 * *((_WORD *)v4 + 10) + 62];
        *v16 &= 0xFBu;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 32] = 88;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 32] = 152;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 34] = 46;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 9) + 46] = 0;
        *(_WORD *)&gSprites[68 * *((_WORD *)v4 + 10) + 46] = 0;
        v8 = 512;
        v7 = 2;
_08144DF0:
        *((_WORD *)v4 + 4) = (unsigned __int8)sub_8148EC0(v7, 0x2000, v8, 8);
        break;
      default:
        break;
    }
  }
  v17 = &dword_3004B20[10 * v3];
  *((_WORD *)v17 + 6) = (unsigned __int8)CreateTask((int)sub_8144934, 0);
  LOWORD(dword_3004B20[10 * *((_WORD *)v17 + 6) + 2]) = v2;
  HIWORD(dword_3004B20[10 * *((_WORD *)v17 + 6) + 2]) = 0;
  LOWORD(dword_3004B20[10 * *((_WORD *)v17 + 6) + 3]) = v3;
  *((_WORD *)v17 + 5) = (unsigned __int8)CreateTask((int)sub_8144664, 0);
  LOWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 2]) = 0;
  HIWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 2]) = v3;
  LOWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 3]) = *((_WORD *)v17 + 9);
  HIWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 3]) = *((_WORD *)v17 + 10);
  LOWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 4]) = 0;
  if ( v2 == 2 )
    HIWORD(dword_3004B20[10 * *((_WORD *)v17 + 5) + 4]) = 69;
  return v19;
}
