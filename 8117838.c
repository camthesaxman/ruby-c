int __fastcall sub_8117838(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( a1 << 24 )
  {
    FreeAllSpritePalettes();
  }
  else
  {
    FreeAllSpritePalettes();
    LoadSpritePalettes((int)&gUnknown_083F9E30);
    LZ77UnCompWram(&gUnknown_083F92A8, 33648640);
    LZ77UnCompWram(&gUnknown_083F90FC, 33652224);
    LZ77UnCompWram(&gUnknown_083F9D3C, 33652736);
  }
  return v2;
}
