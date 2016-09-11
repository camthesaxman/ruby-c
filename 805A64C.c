int __fastcall fish8(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed int v3; // r1@1
  int v5; // [sp+0h] [bp-14h]@1

  v1 = a1;
  v2 = memcpy(&v5, &gUnknown_0830FD08, 12);
  sub_805A954(v2);
  ++*(_WORD *)(v1 + 8);
  v3 = *(_WORD *)(v1 + 32);
  if ( v3 < *(_WORD *)(v1 + 34)
    || v3 <= 1
    && *((_WORD *)&v5 + 2 * *(_WORD *)(v1 + 38) + *(_WORD *)(v1 + 32)) > (signed __int16)((unsigned __int16)Random()
                                                                                        % 0x64u) )
  {
    *(_WORD *)(v1 + 8) = 3;
  }
  return 0;
}
