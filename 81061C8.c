int __fastcall sub_81061C8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v4; // [sp+0h] [bp-18h]@1
  int v5; // [sp+14h] [bp-4h]@5

  v1 = a1;
  memcpy(&v4, (const char *)&gUnknown_083ECCA2, 16);
  v2 = *(_WORD *)(v1 + 46);
  if ( !*(_WORD *)(v1 + 46) )
  {
    *(_WORD *)(v1 + 46) = 1;
    *(_WORD *)(v1 + 48) = 12;
  }
  *(_WORD *)(v1 + 36) = cosine(*((_WORD *)&v4 + *(_WORD *)(v1 + 58)), *(_WORD *)(v1 + 48));
  *(_WORD *)(v1 + 38) = sine(*((_WORD *)&v4 + *(_WORD *)(v1 + 58)), *(_WORD *)(v1 + 48));
  if ( *(_WORD *)(v1 + 48) )
    --*(_WORD *)(v1 + 48);
  return v5;
}
