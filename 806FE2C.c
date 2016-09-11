int __fastcall sub_806FE2C(unsigned __int8 a1, unsigned __int16 a2, int a3)
{
  int v3; // r5@1
  unsigned __int8 v4; // r4@1
  int v5; // r6@1
  int v6; // r9@1
  int v7; // r7@1
  int v8; // r8@2
  int *v9; // r4@3
  __int16 v10; // r0@3
  signed int v11; // r0@5
  int *v12; // r1@8
  int v13; // r0@8
  int v14; // r0@12
  int v15; // r2@12
  __int16 v16; // r0@16
  int *v17; // r2@16
  int *v18; // r0@19
  int v19; // r2@22
  int v21; // [sp+1Ch] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = 0;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  v7 = (unsigned __int8)CreateTask(TaskDummy, 5);
  sub_806E8D0(v4, v5, v3);
  if ( sub_806FD90(v201C000, v5) << 24 )
  {
    v11 = 1;
    v8 = 4 * v7;
  }
  else
  {
    v6 = (unsigned __int8)sub_806FB7C(v5);
    v8 = 4 * v7;
    if ( v6 == 1 )
    {
      v9 = &dword_3004B20[10 * v7];
      *((_WORD *)v9 + 14) = GetMonData(v201C000, 58, 4 * v7);
      v10 = GetMonData(v201C000, 57, (int)dword_3004B20);
      *((_WORD *)v9 + 15) = v10;
      if ( *((_WORD *)v9 + 14) == v10 )
      {
        v6 = 0;
        *((_WORD *)v9 + 14) = 0;
        *((_WORD *)v9 + 15) = 0;
      }
    }
    v11 = (unsigned __int8)ExecuteTableBasedItemEffect__(v201C005, v5, 0);
  }
  if ( v11 )
  {
    v202E8F4 = 0;
    audio_play(5);
    sub_806E834((int)&gUnknown_0840EF85, 1u);
    v12 = dword_3004B20;
    v13 = v8 + v7;
_08070002:
    v12[2 * v13] = (int)sub_806FB0C;
    return v21;
  }
  v202E8F4 = 1;
  if ( IsBlueYellowRedFlute(v5) << 24 )
    audio_play(117);
  else
    audio_play(1);
  v14 = (unsigned __int8)sub_80A1CD8(v201C000);
  if ( v14 == 6 || !v14 )
    sub_806FBB4(v201C000, v201C005);
  if ( v6 != 1 )
  {
    GetMonNickname(v201C000, (int)&gStringVar1);
    if ( !(IsBlueYellowRedFlute(v5) << 24) )
      sub_80A9538(v5, 1);
    GetMedicineItemEffectMessage(v5);
    sub_806E07C(v201C005, v201C000, v19);
    sub_806E834((int)&gStringVar4, 1u);
    v12 = dword_3004B20;
    v13 = v8 + v7;
    goto _08070002;
  }
  v16 = GetMonData(v201C000, 57, v15);
  v17 = &dword_3004B20[2 * (v8 + v7)];
  *((_WORD *)v17 + 16) = v16 - *((_WORD *)v17 + 15);
  v201C00C = -32768;
  if ( *((_WORD *)v17 + 15) )
    *((_WORD *)v17 + 18) = 0;
  else
    *((_WORD *)v17 + 18) = 1;
  v201C014 = v201C010;
  v18 = &dword_3004B20[2 * (v8 + v7)];
  *v18 = (int)sub_806F8AC;
  v201B282 = *((_WORD *)v18 + 15);
  return v21;
}
