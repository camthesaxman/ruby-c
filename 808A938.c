int __fastcall sub_808A938(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_8072DEC(a1);
  audio_play(5u);
  MenuZeroFillWindowRect(0x13u, 0, 0x1Du, 0x13u);
  sub_806D5A4();
  sub_8089C7C(v202FFA8);
  dword_3004B20[10 * v1] = (int)sub_8089D94;
  return v3;
}
