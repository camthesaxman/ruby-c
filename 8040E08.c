int __fastcall cosine(int a1, __int16 a2)
{
  return *(_WORD *)((char *)&gSineTable + (a1 << 16 >> 15) + 128) * a2 << 8 >> 16;
}
