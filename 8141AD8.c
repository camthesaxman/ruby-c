int __fastcall sub_8141AD8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int *v2; // r1@1
  int v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 16) )
  {
    if ( *((_WORD *)v2 + 5) == 1 )
    {
      v3 = 12 * *((_BYTE *)v2 + 8) + 33650704;
      *(_BYTE *)(v3 + 1) |= 1u;
    }
    DestroyTask(v1);
  }
  return v5;
}
