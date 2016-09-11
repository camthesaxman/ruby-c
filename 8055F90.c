int __fastcall mapconnection_get_mapheader(int a1)
{
  return get_mapheader_by_bank_and_number(*(_BYTE *)(a1 + 8), *(_BYTE *)(a1 + 9));
}
