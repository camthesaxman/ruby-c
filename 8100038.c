int __fastcall sub_8100038(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_80FFC24(a1, (int)&gDecorations + 32 * *(_BYTE *)(v20388D0 + v20388F5)) == 1 )
  {
    DisplayItemMessageOnField(v1, (int)"ÊàÕ×Ù", (int)sub_81000A0, 0);
  }
  else
  {
    audio_play(0x20u);
    DisplayItemMessageOnField(v1, (int)&gUnknown_0840FACD, (int)sub_81006A8, 0);
  }
  return v3;
}
