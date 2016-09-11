int sub_8040C38()
{
  unsigned int v0; // r5@2
  int v1; // r3@2
  int v3; // [sp+8h] [bp-4h]@0

  if ( !(v20239F8 & 0x2008) )
  {
    v0 = (unsigned __int16)Random(0) % 0x64u & 0xFFFF;
    v1 = 28 * (unsigned __int16)GetMonData((int)&unk_30045C0, 11, 0);
    if ( *(_WORD *)((char *)&gBaseStats + v1 + 12) == *(_WORD *)((char *)&gBaseStats + v1 + 14) )
    {
_08040C82:
      SetMonData((int)&unk_30045C0, 12, (int)&unk_81FEC24 + v1);
      return v3;
    }
    if ( v0 > 0x2C )
    {
      if ( v0 > 0x5E )
      {
        SetMonData((int)&unk_30045C0, 12, (int)&unk_81FEC26 + v1);
        return v3;
      }
      goto _08040C82;
    }
  }
  return v3;
}
