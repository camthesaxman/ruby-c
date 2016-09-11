int __fastcall sub_806BF74(unsigned __int8 a1, char a2)
{
  int v2; // r9@1
  char v3; // r4@1
  unsigned __int8 v4; // r0@1
  int v5; // r6@1
  unsigned int v6; // r5@1
  int v7; // r0@1
  int v8; // r0@13
  int v9; // r8@13
  int v10; // r0@17
  char *v11; // r4@21
  char *v12; // r0@23
  unsigned __int8 v13; // r0@2
  int v14; // r7@24
  char *v15; // r1@30
  char *v16; // r1@33
  int v17; // r4@34
  int v19; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = sub_806CA00(a1);
  v5 = v4;
  v6 = *(_WORD *)&gSprites[68 * v4 + 46] & 0xFF;
  sub_806DA44(v2, v6, 0);
  v7 = (unsigned __int8)sub_806B528();
  if ( v7 == 1 )
  {
    if ( !v6 || v6 == 2 || v6 == 3 )
      sub_806BF24(&gUnknown_083769C0[2 * v6], v6, 3, 0);
    if ( v6 == 1 || v6 == 4 || v6 == 5 )
      sub_806BF24(&gUnknown_083769C0[2 * v6], v6, 4, 0);
    if ( v6 == 7 )
      sub_806BBEC(1u);
    sub_806C490(v5, v6, v3);
    v8 = *(_WORD *)&gSprites[68 * v5 + 46];
    v9 = 16 * v5;
    if ( !*(_WORD *)&gSprites[68 * v5 + 46] || v8 == 2 || v8 == 3 )
      sub_806BF24(&gUnknown_083769C0[2 * *(_WORD *)&gSprites[68 * v5 + 46]], *(_WORD *)&gSprites[68 * v5 + 46], 3, 1u);
    v10 = *(_WORD *)&gSprites[68 * v5 + 46];
    if ( v10 == 1 || v10 == 4 || v10 == 5 )
      sub_806BF24(&gUnknown_083769C0[2 * *(_WORD *)&gSprites[68 * v5 + 46]], *(_WORD *)&gSprites[68 * v5 + 46], 4, 1u);
    v11 = &gSprites[68 * v5];
    if ( *((_WORD *)v11 + 23) == 7 )
      sub_806BBEC(2u);
    v201B261 = 2;
    *((_WORD *)v11 + 16) = *((_BYTE *)&gUnknown_083768B8 + 4 * *((_WORD *)v11 + 23) + 64);
    *((_WORD *)v11 + 17) = *((_BYTE *)&gUnknown_083768B8 + 4 * *((_WORD *)v11 + 23) + 65);
    v12 = gSprites;
  }
  else
  {
    v13 = battle_type_is_double(v7);
    v14 = v13;
    if ( v6 > 5 )
      sub_806BBEC(1u);
    else
      sub_806BF24(&gUnknown_083769A8[12 * v13] + 2 * v6, v6, 3, 0);
    if ( v14 )
      sub_806C310(v5, v6, v3);
    else
      sub_806C1E4(v5, v6, v3);
    v15 = &gSprites[68 * v5];
    v9 = 16 * v5;
    if ( (signed int)*((_WORD *)v15 + 23) > 5 )
      sub_806BBEC(2u);
    else
      sub_806BF24(&gUnknown_083769A8[12 * v14] + 2 * *((_WORD *)v15 + 23), *((_WORD *)v15 + 23), 3, 1u);
    v201B261 = 2;
    v16 = &gSprites[68 * v5];
    *((_WORD *)v16 + 16) = *((_BYTE *)&gUnknown_083768B8 + 32 * v14 + 4 * *((_WORD *)v16 + 23));
    *((_WORD *)v16 + 17) = *((_BYTE *)&gUnknown_083768B8 + 32 * v14 + 4 * *((_WORD *)v16 + 23) + 1);
    v12 = gSprites;
  }
  v17 = (int)&v12[4 * (v9 + v5)];
  sub_806DA44(v2, *(_WORD *)(v17 + 46) & 0xFF, 1);
  if ( v6 != *(_WORD *)(v17 + 46) )
    audio_play(5);
  return v19;
}
