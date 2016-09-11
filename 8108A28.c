int sub_8108A28()
{
  int v0; // r2@1
  unsigned int *v1; // r10@2
  int v2; // r7@4
  signed int v3; // r8@4
  int v4; // r5@5
  int v5; // r2@5
  int v6; // r6@5
  int v7; // r2@5
  int v8; // r0@5
  int v10; // [sp+1Ch] [bp-4h]@0

  v0 = 33788472;
  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v1 = (unsigned int *)&unk_30045C0;
  else
    v1 = dword_3004360;
  v2 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  v3 = 0;
  do
  {
    v4 = (unsigned __int16)GetMonData((int)&v1[25 * v3], 11, v0);
    v6 = (unsigned __int16)GetMonData((int)&v1[25 * v3], 57, v5);
    v8 = GetMonData((int)&v1[25 * v3], 55, v7);
    if ( v4 && v4 != 412 && v6 && v8 == v2 )
      v2039238 += 10;
    ++v3;
  }
  while ( v3 <= 5 );
  v2039238 = *(_BYTE *)(v2039238 + 6) | (*(_BYTE *)(v2039238 + 7) << 8) | (*(_BYTE *)(v2039238 + 8) << 16) | (*(_BYTE *)(v2039238 + 9) << 24);
  return v10;
}
