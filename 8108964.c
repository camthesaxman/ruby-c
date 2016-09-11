int __fastcall sub_8108964(int a1, int a2, int a3)
{
  unsigned int *v3; // r1@2
  unsigned int *v4; // r9@5
  int v5; // r7@5
  signed int v6; // r8@5
  int v7; // r5@6
  int v8; // r2@6
  int v9; // r6@6
  int v10; // r2@6
  int v11; // r0@6
  int v13; // [sp+1Ch] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v3 = (unsigned int *)&unk_30045C0;
  else
    v3 = dword_3004360;
  v4 = v3;
  v5 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  v6 = 0;
  do
  {
    v7 = (unsigned __int16)GetMonData((int)&v4[25 * v6], 11, a3);
    v9 = (unsigned __int16)GetMonData((int)&v4[25 * v6], 57, v8);
    v11 = GetMonData((int)&v4[25 * v6], 55, v10);
    if ( v7 && v7 != 412 && v9 && v11 == v5 )
    {
      v2039238 = *(_BYTE *)(v2039238 + 6) | (*(_BYTE *)(v2039238 + 7) << 8) | (*(_BYTE *)(v2039238 + 8) << 16) | (*(_BYTE *)(v2039238 + 9) << 24);
      return v13;
    }
    ++v6;
  }
  while ( v6 <= 5 );
  v2039238 += 10;
  return v13;
}
