int __fastcall sub_80CBCF8(int a1)
{
  int v1; // r4@1
  int v2; // r3@1
  char *v3; // r1@7
  char v4; // r0@7
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 3 * *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 50) == gUnknown_083D680C[v2 + 1] )
  {
    if ( gUnknown_083D680C[v2 + 2] == 127 )
    {
      *(_WORD *)(a1 + 46) = 0;
      *(_DWORD *)(a1 + 28) = sub_80CBDB0;
    }
    *(_WORD *)(a1 + 50) = 0;
    ++*(_WORD *)(a1 + 46);
  }
  else
  {
    ++*(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 48) = (unsigned __int8)(gUnknown_083D680C[3 * *(_WORD *)(a1 + 46) + 2]
                                          * gUnknown_083D680C[3 * *(_WORD *)(a1 + 46)]
                                          + *(_WORD *)(a1 + 48));
    if ( !(sub_8076BE0() << 24) )
    {
      if ( ((*(_WORD *)(v1 + 48) - 1) & 0xFFFFu) > 0xBE )
      {
        v3 = (char *)(v1 + 67);
        v4 = 29;
      }
      else
      {
        v3 = (char *)(v1 + 67);
        v4 = 31;
      }
      *v3 = v4;
    }
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 60);
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 20);
  }
  return v6;
}
