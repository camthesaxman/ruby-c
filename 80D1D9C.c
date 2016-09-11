int __fastcall sub_80D1D9C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int v2; // r3@1
  __int16 v3; // r0@1
  signed int v4; // r0@2
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  v3 = LOWORD(dword_3004B20[v2 + 7]) + 1;
  LOWORD(dword_3004B20[v2 + 7]) = v3;
  if ( v3 == 5 )
  {
    HIWORD(dword_3004B20[v2 + 7]) = 136;
    RequestSpriteCopy((int)&dword_3004B20[v2 + 7] + 2, 67108944, 2);
    v4 = sub_80791A8(1, 0, 0, 0, 0, 0, 0);
    BlendPalettes(v4, 0x10u, 0x7FFF);
  }
  else if ( v3 > 4 )
  {
    word_30042C4 = 0;
    word_3004240 = 0;
    v4000048 = 16191;
    v400004A = 16191;
    v4000050 = 0;
    v4000054 = 0;
    move_anim_task_del(v1);
  }
  return v6;
}
