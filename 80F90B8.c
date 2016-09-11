int __fastcall DisplayItemMessageOnField(unsigned __int8 a1, int a2, int a3, unsigned __int16 a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v7; // [sp+8h] [bp-4h]@0

  v4 = a3;
  v5 = a1;
  sav2_get_text_speed(a2, a4);
  dword_300074C = v4;
  dword_3004B20[10 * v5] = (int)sub_80F9090;
  return v7;
}
