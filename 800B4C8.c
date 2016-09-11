int __fastcall sub_800B4C8(unsigned __int8 a1)
{
  int *v1; // r3@1
  __int16 v2; // r1@1
  __int16 v3; // r1@5
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5);
  if ( *((_WORD *)v1 + 5) == 16 )
  {
    HIWORD(dword_3004B20[10 * *((_WORD *)v1 + 4) + 4]) = 1;
    DestroyTask(a1);
  }
  else if ( *((_WORD *)v1 + 8) )
  {
    --*((_WORD *)v1 + 8);
  }
  else
  {
    *((_WORD *)v1 + 8) = *((_WORD *)v1 + 7);
    v3 = v2 + 1;
    *((_WORD *)v1 + 5) = v3;
    --*((_WORD *)v1 + 6);
    v4000052 = v3 + (LOWORD(dword_3004B20[10 * a1 + 3]) << 8);
  }
  return v5;
}
