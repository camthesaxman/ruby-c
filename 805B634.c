int RemoveFieldObjectsOutsideView()
{
  int v0; // r3@1
  unsigned int v1; // r2@2
  signed int v2; // r4@2
  unsigned __int8 v3; // r5@2
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = 0;
    v2 = 0;
    v3 = v0 + 1;
    do
    {
      if ( *(_BYTE *)(4 * v1 + 0x2029818) && v0 == *(_BYTE *)(4 * v1 + 0x202981A) )
        v2 = 1;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 3 );
    if ( !v2 && (dword_30048A0[9 * v0] & 0x10001) == 1 )
      RemoveFieldObjectIfOutsideView(&dword_30048A0[9 * v0]);
    v0 = v3;
  }
  while ( v3 <= 0xFu );
  return v5;
}
