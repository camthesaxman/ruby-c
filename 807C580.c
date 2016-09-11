int __fastcall sub_807C580(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r7@2
  int *v3; // r0@3
  int *v4; // r4@4
  int *v5; // r3@7
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 0xF || (v2 = 4 * a1, HIWORD(dword_3004B20[10 * a1 + 2])) )
  {
    v3 = &dword_3004B20[10 * a1];
    *((_WORD *)v3 + 5) = 1;
    *((_WORD *)v3 + 4) = 0;
    v2 = 4 * v1;
  }
  v4 = &dword_3004B20[2 * (v2 + v1)];
  if ( *((_WORD *)v4 + 4) )
  {
    --*((_WORD *)v4 + 4);
  }
  else
  {
    *((_WORD *)v4 + 5) = 1;
    v4000000 = 5953;
    sub_807BF28(120, 108);
    sub_807BF84(120, 148);
    *((_WORD *)v4 + 8) = 0;
    *v4 = (int)sub_807C644;
  }
  v5 = &dword_3004B20[2 * (v2 + v1)];
  if ( !(*((_WORD *)v5 + 4) & 1) && *((_WORD *)v5 + 7) )
    ++*((_WORD *)v5 + 7);
  v400002C = HIWORD(dword_3004B20[2 * (v2 + v1) + 3]) << 8;
  return v7;
}
