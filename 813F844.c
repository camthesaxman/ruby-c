int __fastcall sub_813F844(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r9@1
  int v3; // r2@1
  int v4; // r0@2
  unsigned int *v5; // r1@2
  unsigned __int16 v6; // r0@4
  int v7; // r8@4
  int *v8; // r6@4
  int v9; // r7@4
  int v10; // r4@7
  int v11; // r0@7
  signed int v12; // r0@7
  int v14; // [sp+24h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v4 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
    v5 = (unsigned int *)&unk_30045C0;
  }
  else
  {
    v4 = 25 * *(_WORD *)(2 * v202F7C8 + 0x2024A6A);
    v5 = dword_3004360;
  }
  v6 = GetMonData((int)&v5[v4], 38, v3);
  v7 = (unsigned __int8)ball_number_to_ball_processing_index(v6);
  v8 = &dword_3004B20[10 * v1];
  v9 = *((_WORD *)v8 + 4);
  if ( *((_WORD *)v8 + 4) )
  {
    if ( v9 == 1
      && !LOBYTE(dword_3004B20[10 * *((_WORD *)v8 + 14) + 1])
      && !LOBYTE(dword_3004B20[10 * *((_WORD *)v8 + 15) + 1]) )
    {
      move_anim_task_del(v1);
    }
  }
  else
  {
    v10 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
    v11 = sub_8077ABC(v202F7C8, 1u);
    LOWORD(dword_3004B20[10 * v1 + 7]) = (unsigned __int8)sub_814086C(
                                                            v10,
                                                            (unsigned int)((v11 << 24) + 0x20000000) >> 24,
                                                            (unsigned int)(unsigned __int8)gSprites[68 * v2 + 5] << 28 >> 30,
                                                            (unsigned __int8)gSprites[68 * v2 + 67]);
    v12 = sub_80791A8(1, 0, 0, 0, v9, v9, v9);
    *((_WORD *)v8 + 15) = (unsigned __int8)sub_8141314(0, v202F7C8, v12, v7);
    ++*((_WORD *)v8 + 4);
  }
  return v14;
}
