int __fastcall sub_80893C0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-2Ch]@1
  int v5; // [sp+28h] [bp-4h]@3

  v1 = a1;
  memcpy(&v4, &gUnknown_0839F470, 36);
  *(_WORD *)&gSprites[68 * v202E85C + 38] = *((_WORD *)&v4 + *(_WORD *)(v1 + 12));
  v2 = *(_WORD *)(v1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v2;
  if ( v2 > 17 )
    ++*(_WORD *)(v1 + 8);
  return v5;
}
