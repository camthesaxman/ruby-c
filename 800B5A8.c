int __fastcall sub_800B5A8(unsigned __int8 a1)
{
  int *v1; // r1@1
  __int16 v2; // r3@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 6) )
  {
    --*((_WORD *)v1 + 6);
  }
  else
  {
    v2 = *((_WORD *)v1 + 5);
    if ( *((_WORD *)v1 + 5) == 8 )
    {
      DestroyTask(a1);
    }
    else if ( *((_WORD *)v1 + 8) )
    {
      --*((_WORD *)v1 + 8);
    }
    else
    {
      *((_WORD *)v1 + 8) = *((_WORD *)v1 + 7);
      *((_WORD *)v1 + 5) = v2 + 1;
      LoadPalette((char *)&gUnknown_081E795C + 2 * *((_WORD *)v1 + 5), 1, 16);
    }
  }
  return v4;
}
