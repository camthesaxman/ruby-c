int __fastcall sub_8122694(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v3; // r0@7
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  while ( *(_BYTE *)(v2 + 33788528) )
  {
    v2 = (v2 + 1) & 0xFF;
    if ( v2 > 2 )
    {
      audio_play(0x20u);
      v3 = MenuZeroFillWindowRect(0x14u, 0xAu, 0x1Du, 0x13u);
      sub_8072DEC(v3);
      sub_806D5A4();
      sub_806E834((int)&gUnknown_0840F0C2, 1u);
      dword_3004B20[10 * v1] = (int)sub_8122728;
      return v5;
    }
  }
  *(_BYTE *)(v2 + 33788528) = byte_3005CE0 + 1;
  sub_806BC3C((unsigned __int8)byte_3005CE0, (234881024 * v2 + 469762048) >> 24);
  if ( v2 == 2 )
    sub_806C890(v1);
  sub_8122838(v1);
  return v5;
}
