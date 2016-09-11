int __fastcall sub_81450AC(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r1@1
  __int16 v3; // r1@3
  __int16 v4; // r1@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( *((_WORD *)v1 + 4) )
  {
    DestroyTask(v2);
    *((_WORD *)v1 + 4) = 0;
  }
  v3 = *((_WORD *)v1 + 5);
  if ( *((_WORD *)v1 + 5) )
  {
    DestroyTask(v3);
    *((_WORD *)v1 + 5) = 0;
  }
  v4 = *((_WORD *)v1 + 6);
  if ( *((_WORD *)v1 + 6) )
  {
    DestroyTask(v4);
    *((_WORD *)v1 + 6) = 0;
  }
  if ( *((_WORD *)v1 + 7) )
  {
    DestroyTask(*((_WORD *)v1 + 7));
    *((_WORD *)v1 + 7) = 0;
  }
  v203935C = 1;
  return v6;
}
