int __fastcall sub_8070DBC(unsigned __int8 a1, unsigned __int16 a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  unsigned int v5; // r6@1
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  audio_play(5);
  dword_3004B20[10 * v4] = (int)TaskDummy;
  sub_806E8D0(v4, v5, v3);
  dword_3005E94 = (int)sub_80A53F8;
  if ( ExecuteTableBasedItemEffect__(v201C005, v5, 0) << 24 )
  {
    v202E8F4 = 0;
    sub_806E834((int)&gUnknown_0840EF85, 1u);
    CreateTask(sub_806FB0C, 5);
  }
  else
  {
    sub_80A9538(v5, 1);
  }
  return v7;
}
