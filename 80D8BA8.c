signed int __fastcall sub_80D8BA8(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int16 v4; // r9@1
  __int16 v5; // r10@1
  char *v6; // r4@1
  int v7; // r8@1
  unsigned __int8 v8; // r5@2
  unsigned int v9; // r7@3
  int v10; // r6@3
  int v11; // r1@6
  int v12; // r5@10
  char *v13; // r4@11
  signed int result; // r0@11
  __int16 v15; // [sp+0h] [bp-28h]@1
  signed __int16 v16; // [sp+4h] [bp-24h]@1

  v4 = a2;
  v15 = a3;
  v5 = a4;
  v16 = 0;
  v6 = (char *)&gUnknown_083D9DC4 + (4 * a1 & 0x3FF);
  v7 = (unsigned __int8)v6[3] << 24 >> 28;
  if ( v7 == 2
    || (v8 = battle_get_side_with_given_state((unsigned int)*((_WORD *)v6 + 1) << 20 >> 24),
        !(b_side_obj__get_some_boolean(v8) << 24)) )
  {
    v9 = (unsigned int)(*(_WORD *)v6 << 22 >> 6) >> 16;
    v10 = (*(_DWORD *)v6 << 12 >> 22) & 0xFFFF;
    goto _080D8CA6;
  }
  v16 = 1;
  LOWORD(v9) = (unsigned __int8)sub_8077ABC(v8, 2u);
  LOWORD(v10) = (unsigned __int8)sub_8077ABC(v8, 3u);
  if ( !v7 )
  {
    v9 = ((signed __int16)v9 - (signed __int16)sub_807A100(v8, 1u) / 6) & 0xFFFF;
    v11 = (signed __int16)v10 - (signed __int16)sub_807A100(v8, 0) / 6;
_080D8C8E:
    LOWORD(v10) = v11;
    goto _080D8CA6;
  }
  if ( v7 == 1 )
  {
    v9 = ((signed __int16)v9 + (signed __int16)sub_807A100(v8, 1u) / 6) & 0xFFFF;
    v11 = (signed __int16)v10 + (signed __int16)sub_807A100(v8, 0) / 6;
    goto _080D8C8E;
  }
_080D8CA6:
  v12 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D9E3C, v9 - ((signed __int16)v10 + 8) / 2, -8);
  if ( v12 == 64 )
  {
    result = 0;
  }
  else
  {
    v13 = &gSprites[68 * v12];
    StartSpriteAffineAnim((int)v13, v4);
    *((_WORD *)v13 + 23) = v16;
    *((_WORD *)v13 + 26) = v9;
    *((_WORD *)v13 + 27) = v10;
    *((_WORD *)v13 + 28) = v4;
    *((_WORD *)v13 + 29) = v15;
    *((_WORD *)v13 + 30) = v5;
    result = 1;
  }
  return result;
}
