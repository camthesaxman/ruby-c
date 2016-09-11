int __fastcall sub_810AFE0(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  RtcCalcLocalTime();
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 6) = byte_300403A;
  *((_WORD *)v2 + 7) = byte_300403B;
  *((_WORD *)v2 + 4) = 6 * *((_WORD *)v2 + 7);
  *((_WORD *)v2 + 5) = 30 * (*((_WORD *)v2 + 6) % 12) + 5 * (*((_WORD *)v2 + 7) / 10);
  *((_WORD *)v2 + 9) = byte_300403A > 11;
  return v4;
}
