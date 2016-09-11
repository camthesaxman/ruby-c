int __fastcall FieldEffectScript_ReadWord(int a1)
{
  return **(_BYTE **)a1
       + (*(_BYTE *)(*(_DWORD *)a1 + 1) << 8)
       + (*(_BYTE *)(*(_DWORD *)a1 + 2) << 16)
       + (*(_BYTE *)(*(_DWORD *)a1 + 3) << 24);
}
