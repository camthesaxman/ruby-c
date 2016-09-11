int __fastcall sub_802DB6C(unsigned __int8 a1)
{
  int v1; // r8@1
  int *v2; // r6@1
  int v3; // r9@3
  __int16 v4; // r10@3
  int v5; // r7@3
  __int16 v6; // r4@3
  int v7; // r4@4
  char v8; // r5@5
  int v10; // [sp+0h] [bp-28h]@4
  int v11; // [sp+4h] [bp-24h]@4
  int v12; // [sp+24h] [bp-4h]@7

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 14) > 12 )
  {
    v3 = *((_BYTE *)v2 + 8);
    v4 = *((_WORD *)v2 + 5);
    v5 = *((_BYTE *)v2 + 12);
    v6 = sub_8045C78(v5, (unsigned __int8)byte_3004340[v5], 1, 0);
    sub_8043DFC((unsigned __int8)byte_3004340[v5]);
    if ( v6 == -1 )
    {
      m4aSongNumStop(33);
      v7 = (unsigned __int8)GetMonData((char *)&unk_3004360 + 100 * v3, 56);
      v11 = GetMonData((char *)&unk_3004360 + 100 * v3, 25);
      v10 = *(&gExperienceTables[101
                               * *((_BYTE *)&gBaseStats
                                 + 28 * (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v3, 11)
                                 + 19)]
            + v7
            + 1);
      if ( v11 + v4 < v10 )
      {
        v11 += v4;
        SetMonData((char *)&unk_3004360 + 100 * v3, 25, &v11);
        dword_3004330[v5] = (int)sub_802D90C;
        DestroyTask(v1);
      }
      else
      {
        SetMonData((char *)&unk_3004360 + 100 * v3, 25, &v10);
        CalculateMonStats((char *)&unk_3004360 + 100 * v3);
        v8 = v2024A60;
        v2024A60 = v5;
        dp01_build_cmdbuf_x21_a_bb(1u, 11, v4 - (v10 - v11));
        v2024A60 = v8;
        *v2 = (int)sub_802DCB0;
      }
    }
  }
  else
  {
    ++*((_WORD *)v2 + 14);
  }
  return v12;
}
