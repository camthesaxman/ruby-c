int __fastcall sub_81225D4(unsigned __int8 a1)
{
  __int16 v1; // r4@2
  int v3; // [sp+Ch] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = *(_WORD *)&gSprites[68 * (HIWORD(dword_3004B20[10 * a1 + 3]) << 16 >> 24) + 46] & 0xFF;
    DestroyTask(a1);
    v201B262 = 1;
    sub_809D8BC((int)dword_3004360, v1, byte_3004350 - 1, (int)sub_81225A4, 0);
  }
  return v3;
}
