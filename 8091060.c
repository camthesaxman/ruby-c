int __fastcall sub_8091060(__int16 a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  if ( !(a1 & 0x100) )
  {
    v4000000 &= 0xFEFFu;
    v4000008 = 0;
    v4000010 = 0;
    v4000012 = 0;
  }
  if ( !(a1 & 0x200) )
  {
    v4000000 &= 0xFDFFu;
    v400000A = 0;
    v4000014 = 0;
    v4000016 = 0;
  }
  if ( !(a1 & 0x400) )
  {
    v4000000 &= 0xFBFFu;
    v400000C = 0;
    v4000018 = 0;
    v400001A = 0;
  }
  if ( !(a1 & 0x800) )
  {
    v4000000 &= 0xF7FFu;
    v400000E = 0;
    v400001C = 0;
    v400001E = 0;
  }
  if ( !(a1 & 0x1000) )
  {
    v4000000 &= 0xEFFFu;
    ResetSpriteData();
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = 8;
  }
  return v2;
}
